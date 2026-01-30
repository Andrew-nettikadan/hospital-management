import React, { useState } from "react";

function SPA() {
  const [regName, setRegName] = useState("");
  const [regAge, setRegAge] = useState("");
  const [regGmail, setRegGmail] = useState("");

  const [appName, setAppName] = useState("");
  const [appDate, setAppDate] = useState("");

  return (
    <div className="app">
      {/* HEADER */}
      <header className="site-header">
        <h2 className="logo">DS MEDICITY</h2>
        <nav className="site-nav">
          <a href="#home">Home</a>
          <a href="#registration">Registration</a>
          <a href="#appointment">Appointment</a>
          <a href="#departments">Departments</a>
          <a href="#services">Services</a>
          <a href="#location">Location</a>
          <a href="#gallery">Gallery</a>
          <a href="#contact">Contact</a>
        </nav>
      </header>

      {/* HOME */}
      <section id="home" className="hero">
        <div className="hero-inner">
          <h1>DS MEDICITY</h1>
          <h2>Innovating for a Healthier Tomorrow</h2>
        </div>
      </section>

      {/* REGISTRATION */}
      <section id="registration" className="section">
        <div className="section-inner">
          <h1>Registration</h1>
          <div className="card">
            <input
              placeholder="Name"
              value={regName}
              onChange={(e) => setRegName(e.target.value)}
            />

            <input
              placeholder="Age"
              value={regAge}
              onChange={(e) => setRegAge(e.target.value)}
            />

            <input
              placeholder="Gmail"
              value={regGmail}
              onChange={(e) => setRegGmail(e.target.value)}
            />

            <button
              className="primary"
              onClick={() =>
                alert(`Registered: ${regName}, Age: ${regAge}, Gmail: ${regGmail}`)
              }
            >
              Submit
            </button>
          </div>
        </div>
      </section>

      {/* APPOINTMENT */}
      <section id="appointment" className="section section--image">
        <div className="section-inner">
          <h1>Appointment</h1>
          <div className="card">
            <input
              placeholder="Name"
              value={appName}
              onChange={(e) => setAppName(e.target.value)}
            />

            <input
              type="date"
              value={appDate}
              onChange={(e) => setAppDate(e.target.value)}
            />

            <button
              className="primary"
              onClick={() =>
                alert(`Appointment booked for ${appName} on ${appDate}`)
              }
            >
              Book
            </button>
          </div>
        </div>
      </section>

      {/* DEPARTMENTS */}
      <section id="departments" className="section">
        <div className="section-inner">
          <h1>Departments</h1>
          <h2>
          <div className="departments">
          <div>
            • Casualty Department<br></br>
            • Gynaecology Department<br></br>
            • Haematology Department<br></br>
            • Neurology Department<br></br>
            • Pediatrics Department<br></br>
            • Oncology Department<br></br>
            • Ophthalmology Department<br></br>
            • Orthopaedic Department<br></br>
            • Urology Department<br></br>
          </div>
          <div>
            • Psychiatry Department<br></br>
            • Inpatient Department (IPD)<br></br>
            • Outpatient Department (OPD)<br></br>
            • Operating Theatre (OT)<br></br>
            • Intensive Care Unit (ICU)<br></br>
            • Anesthesiology Department<br></br>
            • Cardiology Department<br></br>
            • ENT Department<br></br>
            • Gastroenterology Department<br></br>
            • General Surgery<br></br>
          </div>
        </div>
          </h2>
        </div>
      </section>

      {/* SERVICES */}
      <section id="services" className="section">
        <div className="section-inner">
          <h1>Services</h1>
          <ol className="services-list">
            <li>Preventive Healthcare</li>
            <li>Diagnostic Services</li>
            <li>Inpatient & Outpatient Care</li>
            <li>Surgical Services</li>
            <li>Emergency Services</li>
            <li>24×7 Pharmacy</li>
          </ol>
        </div>
      </section>

      {/* LOCATION */}
      <section id="location" className="section">
        <div className="section-inner">
          <h1>Locations</h1>
          <h2>
            Indiranagar<br />
            Koramangala<br />
            Whitefield<br />
            BTM Layout<br />  
            HSR layout <br />
            Jayanagar<br />
            Malleshwaram<br />
          </h2>
        </div>
      </section>

      {/* GALLERY */}
      <section id="gallery" className="section">
        <div className="section-inner">
          <h1>Gallery</h1>
          <p>Hospital Infrastructure Images</p>
        </div>
      </section>

      {/* CONTACT */}
      <section id="contact" className="section">
        <div className="section-inner">
          <h1>Contact</h1>
          <p>Email: dsmedicity@gmail.com</p>
          <p>Phone: +91 98765 43210</p>
        </div>
      </section>

      {/* FOOTER */}
      <footer className="site-footer">
        <marquee>© 2025 DS Medicity</marquee>
      </footer>
    </div>
  );
}


export default SPA;